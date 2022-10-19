mtrx = []
t_mtrx = []
no_of_rows = int(input("Enter the No_of Rows: "))
no_of_col = int(input("Enter the No of Columns: "))
temp_col = []
for i in range(no_of_rows):
    for j in range(no_of_col):
        temp_val = input("Enter the vaue: ")
        temp_col.append(temp_val)
    mtrx.append(temp_col)
    temp_col = []
print(mtrx)
for i in range(no_of_col):
    for j in range(no_of_rows):
        temp_col.append("0")
    t_mtrx.append(temp_col)
    temp_col = []
print(t_mtrx)
for i in range(no_of_col):
    for j in range(no_of_rows):
        t_mtrx[i][j] = mtrx[j][i]
for x in mtrx:
    print(x)
for x in t_mtrx:
    print(x)