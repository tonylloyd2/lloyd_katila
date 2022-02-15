def encrypt(message,shift_number):
    encrypted_message = ""
    for letter in message:
        position = alphabet.index(letter)
        new_position = position + shift_number
        encoded_letter = alphabet[new_position]
        encrypted_message += encoded_letter
    print(f"Your encoded message is :  {encrypted_message}")

def decrypt(message,shift_number):
    decrypted_message = ""
    for letter in message:
        position = alphabet.index(letter)
        new_position = position - shift_number
        encoded_letter = alphabet[new_position]
        decrypted_message += encoded_letter
    print(f"The decoded message is :  {decrypted_message}")

# code starting snippet
direction = input(" type ' encode ' to encrypt or 'decode' to  decrypt :  ").lower()
# initializing the varibles
user_message_encode=""
user_message_decode=""
if direction=="decode":
    user_message_decode1 = input( "Enter your Message  to be DECODED :  ").lower()
    user_message_decode = user_message_decode1
elif direction=="encode":
    user_message_encode1 = input( "Enter your Message  to be ENCODED :  ").lower()
    user_message_encode = user_message_encode1
user_shift_number = int(input("Enter your shift number  or  the one given :  "))

def control(direction=direction,user_message = user_message_decode,shift_number=user_shift_number):
    if direction == "decode":
        decrypt(message=user_message_decode, shift_number=user_shift_number )
    elif direction == "encode":
        encrypt(message=user_message_encode, shift_number = user_shift_number)

def decode_or_encode_true():
        if direction =="decode":
            control()    
        elif direction =="encode":
            control()
            

# main code snippet
alphabet = ["a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"]
while(True):
    if direction == "decode" or direction == "encode":
        decode_or_encode_true()
        break
    else:
        print("your input is wrong")
        direction = input(" type ' encode ' to encrypt or 'decode' to  decrypt ").lower()    
        if direction == "decode" or direction == "encode":
           decode_or_encode_true() 
           break
        



