gcc ex2.c -o ex2
for i in {1..5}
do
echo "iteration number $i"
./ex2 &
pstree
sleep 5
done