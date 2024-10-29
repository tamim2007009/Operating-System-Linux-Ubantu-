# Working With Arrays
array=(1 2 3 4 5)

echo ${array[0]} # Print the first element
echo ${array[1]} # Print the second element
echo ${array[2]} # Print the third element

echo ${array[*]} # Print all the elements (* or @ any can be used)


echo ${#array[*]} # Print the length of the array

echo ${#array[0]} # Print the length of the first element

echo ${array[*]:1:3} # Print the elements from 1 to 3

# parsing the array and printing the elements
for i in ${array[*]} 
do
    echo "Element: $i"
    echo $i
done