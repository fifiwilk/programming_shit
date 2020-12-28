#!/bin/zsh

# Programming shit

function task() {
    local task_path="$PWD/$1"
    if [ ! -d $task_path ]; then
		/bin/mkdir -p $task_path
		/bin/cp -r ~/Pisanko/templates/tsk/* $task_path/
	fi
	cd $task_path
}

function c() {
	clang++ -std=c++17 \
	-Wall -Wextra -Wshadow -Wconversion -Wno-sign-conversion -Wfloat-equal \
	-D_GLIBCXX_DEBUG -ggdb3 -fsanitize=address,undefined -fno-omit-frame-pointer \
	-fno-optimize-sibling-calls -DDEBUG $1.cpp -o $1
}

function cf() {
	g++ -std=c++17 -O3 $1.cpp -o $1
}

alias vg="vim gen.cpp"
alias vm="vim main.cpp"
alias vb="vim brute.cpp"
alias vt="vim t.in"

alias cg="cat gen.cpp"
alias cm="cat main.cpp"
alias cb="cat brute.cpp"
alias ct="cat t.in"
alias cmo="cat main.out"
alias cbo="cat brute.out"
#################################

# Other shit
alias soundconfig="ncpamixer"
alias wificonfig="nmtui"
#################################
