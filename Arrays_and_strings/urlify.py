def URLify(url):
    url = url.strip()
    n = len(url)
    space_count = url.count(' ')
    new_len  = n + (space_count*2)
    
    result_str = []
    for i in url:
        if i==' ':
            result_str.append('%20')
        else:
            result_str.append(i)

    return ' '.join(result_str)

url = 'Mr John Smith '
print(URLify(url))