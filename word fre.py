def frequence(sentence):
    dic={}
    counter=1
    sentence=sentence.split(" ")    
    for word in sentence:
        if word not in dic:
            dic[word]=counter
        else:
            dic[word]=counter+1
    return dic, sum(dic.values())

print(frequence("how are you"))