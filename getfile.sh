if [ "$#" -ne 2 ]; then
	echo "Invalid syntax"
	echo "Gets a specified file from a robot"
	echo "param 1: path to file on robot"
	echo "param 2: robot hostname"
	exit -1
fi

sshpass -p raspberry scp -o StrictHostKeyChecking=no pi@$2:/home/pi/$1 .



