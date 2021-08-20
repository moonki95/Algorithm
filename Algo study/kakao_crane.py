def solution(board, moves):
    answer = 0
    visited = [[0] * len(board) for _ in range(len(board))]
    new_board = list(zip(*board))
    
    stack = []
    for i in moves:
        for j in range(len(new_board)):
            if new_board[i-1][j] != 0 and not visited[i-1][j]:
                visited[i-1][j] = 1
                stack.append(new_board[i-1][j])
                break
        
        if len(stack) >= 2: 
            if stack[-1] == stack[-2]:
                stack.pop()
                stack.pop()
                answer += 2           
    
    return answer
