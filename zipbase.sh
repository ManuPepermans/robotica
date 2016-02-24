if [ "$#" -ne 1 ]; then
	echo "Invalid syntax"
	echo "zip base directory"
	echo "param 1: password"
	exit -1
fi

zip -rP $1 base.zip base
history -c && history -w


