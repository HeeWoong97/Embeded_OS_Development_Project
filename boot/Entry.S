.text //text section: 코드를 바이너리 파일로 변경해 놓은 부분
    .code 32 //명령어의 크기가 32비트

    //.global: vetctor_start, vector_end를 파일 외부에서 읽을 수 있게 하는 extern선언 
    .global vector_start
    .global vector_end

    vector_start:
	LDR R0, =0x10000000
	LDR R1, [R0]
    vector_end:
	.space 1024, 0 //현재 위치부터 1024바이트를 0으로 채워라
.end //end text section
