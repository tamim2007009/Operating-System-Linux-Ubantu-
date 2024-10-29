# Function to find divisors of a number
find_divisors() {
  num=$1
  echo "Divisors of $num are:"
  for ((i=1; i<=num; i++))
  do
    if (( num % i == 0 ))
    then
      echo $i
    fi
  done
}


read -p "Enter a number: " number

find_divisors "$number"
