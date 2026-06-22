class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        for token in tokens:
            if token in ['+', '-', '*', '/']:
                b = stack.pop()
                a = stack.pop()
                match token:
                    case '+':
                        stack.append(int(a + b))
                    case "-":
                        stack.append(int(a - b))
                    case "*":
                        stack.append(int(a * b))
                    case "/":
                        try:
                            stack.append(int(a / b))
                        except ZeroDivisionError:
                            return "Division by zero error"
                    case _:
                        return stack[-1]
                    
            else:
                stack.append(int(token))
        return stack[-1]
        
                