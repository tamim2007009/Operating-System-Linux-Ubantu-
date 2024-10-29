# Function to check if a number is prime
is_prime() {
  num=$1

  # Edge case: 1 is not a prime number
  if [ "$num" -le 1 ]
  then
    echo "$num is not a prime number."
    return
  fi

  # Check divisibility from 2 to sqrt(num)
  for ((i=2; i*i<=num; i++))
  do
    if (( num % i == 0 ))
    then
      echo "$num is not a prime number."
      return
    fi
  done

  echo "$num is a prime number."
}


read -p "Enter a number: " number


is_prime "$number"
