# Number comparison

num1=10
num2=20

if [ $num1 -eq $num2 ] 
then
    echo "Equal"
else
    echo "Not Equal"
fi

if [ $num1 -ne $num2 ]
then
    echo "Not Equal"
else
    echo "Equal"
fi

if [ $num1 -gt $num2 ]
then
    echo "Greater"
else
    echo "Not Greater"
fi

if [ $num1 -lt $num2 ]
then
    echo "Less"
else
    echo "Not Less"
fi