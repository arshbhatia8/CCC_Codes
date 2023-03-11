# tested with ac

n = int(input())
s = input()

ans = [s[0]]
t = 'aeiouy'
st = [[s[0], 1]]

for i in range(1, n):
    if s[i] == s[i-1]:
        st[-1][1]+=1
    else:
        st.append([s[i], 1])
ans = ['']
for ch, n in st:
    if (ch not in t) or (ch in ['e', 'o'] and n==2):
        ans.append(ch*n)
    else:
        ans.append(ch)
        
print(''.join(ans))
