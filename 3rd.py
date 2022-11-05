class DFA:

 def start(input_String,current_state):
    def q0(input_String):

      if input_String=="a":
        c_state="q2"
      elif input_String=="b":
        c_state="q2"
      elif input_String=="c":
        c_state="q1"

      return c_state

    def q1(input_String):

      if input_String=="a":
        c_state="q3"
      elif input_String=="b":
        c_state="q2"
      elif input_String=="c":
        c_state="q2"

      return c_state

    def q2(input_String):

      if input_String=="a":
        c_state="q3"
      elif input_String=="b":
        c_state="q3"
      elif input_String=="c":
        c_state="q3"

      return c_state


    def q3(input_String):

      if input_String=="a":
        c_state="q3"
      elif input_String=="b":
        c_state="q3"
      elif input_String=="c":
        c_state="q3"

      return c_state
    
    size=len(input_String)
    c_state=current_state

    for i in range(size):
      if c_state=="q0":
        c_state=q0(input_String[i])

      elif c_state=="q1":
        c_state=q1(input_String[i])


      elif c_state=="q2":
        c_state=q2(input_String[i])

      elif c_state=="q3":
        c_state=q3(input_String[i])

    return c_state  





dfa=DFA
states=["q0","q1","q2","q3"]
start_state="q0"
final_state=["q2"]
input_String=input("Enter a string ")
current_state="q0"
valid_string=["a","b","c"]


for k in range (len(input_String)):
   if input_String[k] not in ['a','b',"c"]:
    print("Invalid String ==",input_String)
    exit()


current_state= dfa.start(input_String, start_state)
for i in final_state:
   if(current_state==i):
      print("String is Accepted ==",current_state)
   else:
      print("String is Rejected ==",current_state)
