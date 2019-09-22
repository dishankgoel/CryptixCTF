import random
import string
# from deep_memory import message

print("Encrpyt everything!!.... Oh no, system failure. Encrypting last message received")

rand = random.randint(1,10000)
alphanum = string.ascii_letters + string.digits

def random_string(rand_seed, message):
    random.seed(rand_seed)
    rand_string = ''
    for i in range(len(message)//8):
        rand_string += alphanum[random.randint(1,1000)%len(alphanum)]
    return rand_string

def encrpyt(random_str, message):
    encrpyted = ''
    for i in range(len(message)):
        k = ord(message[i])^ord(random_str[i])
        encrpyted += (bin(k)[2:]).zfill(8)
    return encrpyted

def decrypt(random_str, cipher_text):
    decrypted = ''
    for i in range(len(random_str)):
        decrypted += chr(ord(random_str[i])^int(cipher_text[8*i:8*i+8],2))
    return decrypted

cipher_text = '''000010010101110100011000010100110011110101100010011000000001111100110101011000110101010100110100010010110101101001010101001101100110110000111100011000010001111000001011000011010000100000000001010101100011100000100101'''


for i in range(1,10001):
    rand_str = random_string(i, cipher_text)
    print(decrypt(rand_str, cipher_text))
