

str="7.file_check.sh"


file_exists() {
  if [ -e "$1" ] 
  then
    echo "The file exists."
  else
    echo "The file does not exist."
  fi
}


check_read_permission() {
  if [ -r "$1" ]
  then
    echo "You have read permission on this file."
  else
    echo "You do NOT have read permission on this file."
  fi
}


file_exists "$str"
check_read_permission "$str"
