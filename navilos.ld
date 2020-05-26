/*
   링커스트립트: 어떻게 실행파일을 만들지 링커에게 정보를 주는 파일
*/

ENTRY(vector_start) /*시작 위치를 vector_start로 하겠다*/
SECTIONS /*다음 블록이 섹션 배치 설정 정보를 담고있다*/
{
    . = 0X0; /*첫번째 섹션이 메모리주소 0X00000000에 위치*/


    .text : /*text섹션의 배치순서*/
    {
	*(vector_start) /*0X00000000부터 섹션을 실행(리셋 벡터)*/
	*(.text .rodata) /*이어서 .text섹션*/
    }
    .data : /*data섹션과 bss섹션을 연속된 메모리에 배치*/
    {
	*(.data)
    }
    .bss :
    {
	*(.bss)
    }
}
