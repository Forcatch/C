//strlen(consr char *str);
//size_t __cdecl strlen(
//	const char* str
//)
//{
//	const char* eos = str;
//
//	while (*eos++);
//
//	return(eos - str - 1);
//}
static int my_strlen(const char* str)
{
	const char* p = str;
	while (*p++);
	return(p - str - 1);
}
//int strcmp (const char* src,const char* dst)
//int __cdecl strcmp(
//	const char* src,
//	const char* dst
//)
//{
//	int ret = 0;
//
//	while (!(ret = *(unsigned char*)src - *(unsigned char*)dst) && *dst)  
//		++src, ++dst;
//
//	if (ret < 0)
//		ret = -1;
//	else if (ret > 0)
//		ret = 1;
//
//	return(ret);
//}
int my_strcmp(const char* src, const char* dst)
{

	const char* p1 = src, * p2 = dst;
	//while ( *p1||*p2)                //当源字符串为空时，会输出0
	//{
	//	if (*p1!=*p2)
	//		return *p1 - *p2;
	//	p1++;
	//	p2++;
	//}

	int ret = 0;
	while (!(ret == *p1 - *p2) && *p1)  //利用短路效应，
		p1++, p2++;
	return ret;
}

//char* __cdecl strcat(
//	char* dst,
//	const char* src
//)
//{
//	char* cp = dst;
//
//	while (*cp)
//		cp++;                   /* find end of dst */
//
//	while (*cp++ = *src++);       /* Copy src to end of dst */
//
//	return(dst);                  /* return dst */
//
//}
static char* my_strcat(char* str1, const char* str2)
{
	char* p = str1;
	while (*p++ != '\0');  //这里可以源码没有放在条件判断里，不需要p--一下
	p--;
	while (*str2 != 0)    //*p++=*str2++ 这里巧用了条件判断里会多加一次，正好可以把str2结尾的空字符也赋值过去
	{
		*p++ = *str2++;
	}
	*p = '\0';
	return str1;
}