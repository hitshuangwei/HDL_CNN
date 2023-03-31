matrix = [[j for j in range(28)] for i in range(28)]

with open('matrix.txt', 'w') as f:
    for i in range(28):
        for j in range(28):
            f.write(str(matrix[i][j]) + '\n')
