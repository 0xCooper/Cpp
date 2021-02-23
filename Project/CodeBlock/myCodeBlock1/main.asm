Project title : myCodeBlock1
Project path  : /windows/E/VsWorkstation/Cpp/Project/CodeBlock/myCodeBlock1/

Frame function: 
Frame address : 0x7fffffffe500
--------------------------------------------------------------------------------
;6  :	{
0x5555555551a9	endbr64
0x5555555551ad	push   rbp
0x5555555551ae	mov    rbp,rsp
;7  :	    cout << "Hello world!" << endl;
0x5555555551b1	lea    rsi,[rip+0xe4d]        # 0x555555556005
0x5555555551b8	lea    rdi,[rip+0x2e81]        # 0x555555558040 <std::cout@@GLIBCXX_3.4>
0x5555555551bf	call   0x555555555090 <std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*)@plt>
0x5555555551c4	mov    rdx,rax
0x5555555551c7	mov    rax,QWORD PTR [rip+0x2e02]        # 0x555555557fd0
0x5555555551ce	mov    rsi,rax
0x5555555551d1	mov    rdi,rdx
0x5555555551d4	call   0x5555555550a0 <std::ostream::operator<<(std::ostream& (*)(std::ostream&))@plt>
;8  :	    return 0;
0x5555555551d9	mov    eax,0x0
;9  :	}
0x5555555551de	pop    rbp
0x5555555551df	ret
