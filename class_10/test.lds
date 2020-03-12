ENTRY(program)

SECTIONS
{
	.text 0x20000000 + SIZEOF_HEADERS :
	{
		*(.text)
		*(.rodata)
	} 
	
	/DISCARD/ :
	{
		*(*)
	}
}

