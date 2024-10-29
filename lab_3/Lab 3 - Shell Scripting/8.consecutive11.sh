
# Function to check if the input contains '11'
check_consecutive_11() {
  if [[ "$1" =~ 11 ]]
  then
    echo "The string contains consecutive '11'."
  else
    echo "The string does not contain consecutive '11'."
  fi
}


read -p "Enter a string: " input_string


check_consecutive_11 "$input_string"
