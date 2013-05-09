import sys
 
def main():
  for line in sys.stdin:
    if int(line) == 42:
      break
    else:
      print int(line)
 
if __name__ == '__main__':
  main() 
