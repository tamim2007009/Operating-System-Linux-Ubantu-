


# Factorial calculation

function factorial(){

   n=$1

   fact=1
   while (( n >= 1 ));
   do
       fact=$((fact*n))
       n=$n-1

   done

   echo $fact


}


read -p "Enter a positive number: " num

if [[ $num -le 0 ]]; then
    echo "Factorial not possible"
else
     factorial $num
 fi    
