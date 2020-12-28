#!/bin/bash

set -e -C -u
walk () {
	for entry in "$1"/*; do
		local filename=$(basename -- "$entry")
		if [ -d "$entry" ]; then
			#echo "$entry"
			if [[ "$filename" == "paczuszki" ]]; then
				continue
			fi
			walk "$entry"
			continue
		fi

		local extension="${filename##*.}"
		if [[ "$extension" == "cpp"    ||
		      "$extension" == "cc"     ||
		      "$extension" == "pdf"    ||
		      "$extension" == "tex" ]]; then
			continue
		fi

		if [[ "$filename" == "main"      ||
		      "$filename" == "brute"     ||
		      "$filename" == "gen"       ||
		      "$filename" == "main.out"  ||
		      "$filename" == "brute.out" ||
		      "$filename" == "t.in" ]]; then
			rm $entry
		elif [ -e $entry ]; then
			rm --interactive $entry
		fi
	done
}
walk "$1"
