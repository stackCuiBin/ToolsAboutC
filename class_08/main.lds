SECTIONS			
{
	.text 0x20000000:	
	{
		*(.text)		
	}			
	
	.data 0x30000000:
	{
		*(.data)
	}
	
	.bss :
	{
		*(.bss)
	}
}

