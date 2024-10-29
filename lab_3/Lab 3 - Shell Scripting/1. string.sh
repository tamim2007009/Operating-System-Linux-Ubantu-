str1="Amar Ghum Ashe"
str2="$str1 Kintu Hasiber Ghum Ashe Na" # This quotation cannot be used in single quotation

echo $str2
echo ${#str2} # Length of the string


echo ${str2:7} # Print from 5th index
echo ${str2:7:5} # Print from 7th index to 5 characters

echo ${str2#*Kintu} # Remove the first part of the string

echo ${str2%Na*} # Remove the last part of the string

echo ${str2/Kintu/} # Replace the first occurance of Kintu

echo ${str2//Kintu/} # Replace all the occurance of Kintu

echo ${str2/#Amar/} # Replace the first occurance of Amar from the beginning

echo ${str2/%Na/} # Replace the first occurance of Na from the end

echo ${str2:0:5} # Print the first 5 characters

echo ${str2: -5} # Print the last 5 characters

echo ${str2: -5:5} # Print the last 5 characters

[ -n $str2 ] # Check if the string is empty

