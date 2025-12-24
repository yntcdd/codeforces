def solve():
    t = int(input())
    results = []
    
    for _ in range(t):
        n = int(input())
        m = 1 << n  # 2^n
        
        # Start with all bits set
        perm = []
        used = [False] * m
        
        # Step 1: Add (2^n - 1)
        all_ones = m - 1
        perm.append(all_ones)
        used[all_ones] = True
        
        # Step 2: For each bit k (0 to n-1), add (all_ones ^ (1 << k))
        # This removes exactly one bit at a time
        for k in range(n):
            val = all_ones ^ (1 << k)
            perm.append(val)
            used[val] = True
        
        # Step 3: Add 0
        perm.append(0)
        used[0] = True
        
        # Step 4: Add remaining numbers in increasing order
        for i in range(m):
            if not used[i]:
                perm.append(i)
        
        results.append(' '.join(map(str, perm)))
    
    print('\n'.join(results))

if name == "main":
    solve()