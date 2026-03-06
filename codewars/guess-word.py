jawaban = "kayu"
tebak = input("Masukkan tebakan katamu: ")

def count_correct_characters(correct, guess):
    hitung = 0
    if len(correct) != len(guess):
        raise ValueError("Panjang kata harus sama!")
    else:
        for i, j in enumerate(guess):
            if j == correct[i]:
                hitung += 1
    return hitung

#atau
#def count_correct_characters(s, t):
#    assert len(s) == len(t)
#    return sum(a == b for a, b in zip(s, t))

hasil = count_correct_characters(jawaban, tebak)
print(hasil)