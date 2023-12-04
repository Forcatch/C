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
int my_strlen(const char* str)
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