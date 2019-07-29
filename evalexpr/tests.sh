./eval_expr "5 + 5"
echo 10
echo "----"
./eval_expr "8 - 5"
echo 3
echo "----"
./eval_expr "5 - 20 - 15"
echo -30
echo "----"
./eval_expr "25 / 6"
echo 4
echo "----"
./eval_expr "25 % 6"
echo 1
echo "----"
./eval_expr "5 + 4 + 3"
echo 12
echo "----"
./eval_expr "5 / 4 * 4"
echo 4
echo "----"
./eval_expr "5 * 4 / 4"
echo 5
echo "----"
./eval_expr "5 % 4 * 4"
echo 4
echo "----"
./eval_expr "(5 + 4)"
echo 9
echo "----"
./eval_expr "5 + (5 + 4)"
echo 14
echo "----"
./eval_expr "5 - (5 - 4)"
echo 4
echo "----"
./eval_expr "5 / (10 / 4)"
echo 2
echo "----"
./eval_expr "5 + (3 + 5) * 2"
echo 21
echo "----"
./eval_expr "5 - (10 - 4) / 3"
echo 3
echo "----"
./eval_expr "5 * (5 + 3) - 4"
echo 36
echo "----"
./eval_expr "10 / (10 / 4) / 4"
echo 1
echo "----"
./eval_expr "(((5 * 7)))"
echo 35
echo "----"
./eval_expr "5 / (10 / 4)"
echo 2
echo "----"
./eval_expr "(5 + ((3 * 4) - 2))"
echo 15
echo "----"