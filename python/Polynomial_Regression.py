
def polyreg(ord,xl,yl): #Polynomial regression of any order. Finds the function values by solving the matrix form of the polynomial regression formula, with the Gauss Elimination method
    #ord argument is the order of the polynomial regression(2 outputs a quadratic function, 3 a cuibc one etc.)
    #xl is first set of values
    #yl is second set of values

    def suma(slist): #  SUMMATORY
        total = 0
        for x in slist:
            total += x
        return total

    
    def matrix(lines): # Matrix solver
        for x in range(len(lines) - 1):
            for y in range(x+1,len(lines)):
                if lines[y][x] != 0:
                    co = lines[x][x] / (-lines[y][x])
                    for i in range(len(lines[0])):
                        lines[y][i] *= co
                        lines[y][i] += lines[x][i]
        awn = [0]
        length = len(lines)
        for x in range(len(lines)-1,-1,-1):
            awn.append(round((lines[x][length] - suma([awn[length-i] * lines[x][i] for i in range(length-1,x,-1)])) / lines[x][x],14))
        return awn[1:]
    
    ord += 1
    Sum_list_x = []
    Sum_list_xy = []
    for x in range(2 * ord - 1):
        Sum_list_x.append(suma([i**x for i in xl]))
    for x in range(ord):
        Sum_list_xy.append(suma([yl[i] * (xl[i] ** (x)) for i in range(len(yl))]))
    F_x = matrix([Sum_list_x[x:x+ord] + [Sum_list_xy[x]] for x in range(ord)])
    return f"The Polynomial Regression of {ord-1}º order, is F(x) = {' + '.join([f'({F_x[x]} x**{ord-1-x})' for x in range(len(F_x))])}"

#example: polyreg(3,[10,40,70],[20,40,50])

