if [ "$#" -ne 1 ]; then
	echo "Invalid syntax"
	echo "Initiates a SSH connection to robot"
	echo "param 1: robot hostname"
	exit -1
fi

sshpass -p raspberry ssh pi@$1
