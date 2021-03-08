void login_suc()
{
    printf("\n\n\n\n\n\n");
    //printf("\t\t\t\t\t欢迎 %s 进入学生成绩管理系统\t\t\n",);
    printf(FRAME_);
    printf("\t\t\t\t*\t\t   查询学生成绩     请按 1 \t\t*\n");
	printf("\t\t\t\t*\t\t   修改学生成绩     请按 2 \t\t*\n");
	printf("\t\t\t\t*\t\t   返回主菜单       请按 9 \t\t*\n");
    printf("\t\t\t\t*\t\t   退出程序         请按 0 \t\t*\n");
	printf(FRAME_);
	printf("请输入命令：\n");

}
void login_fail()
{
    printf("\n\n\n");
    printf("用户账号或密码输入错误！请重新输入！\n");
}
void grand_per()
{
     printf("\n\n\n");
     printf("\t\t\t\t\t\t您可以进行以下操作\t\t\n");
     printf(FRAME_);
     printf("\t\t\t\t*\t\t    按名字查询   请按 1\t\t\t*\n");
	 printf("\t\t\t\t*\t\t    按学号查询   请按 2\t\t\t*\n");
	 printf("\t\t\t\t*\t\t    按专业查询   请按 3\t\t\t*\n");
	 printf("\t\t\t\t*\t\t    按学科查询   请按 4\t\t\t*\n");
	 printf("\t\t\t\t*\t\t    按性别查询   请按 5\t\t\t*\n");
	 printf("\t\t\t\t*\t\t    按民族查询   请按 6\t\t\t*\n");
	 printf("\t\t\t\t*\t\t    按地址查询   请按 7\t\t\t*\n");
	 printf("\t\t\t\t*\t\t    组合查询     请按 8\t\t\t*\n");
	 printf("\t\t\t\t*\t\t    返回主菜单   请按 9\t\t\t*\n");
     printf("\t\t\t\t*\t\t    退出程序     请按 0\t\t\t*\n");
	 printf(FRAME_);
	 printf("请输入命令：\n");
}
void co_seek()
{
     printf("\n\n\n");
     printf("\t\t\t\t\t 请输入您需要组合查询的内容代码\t\t\n");
     printf(FRAME_);
     printf("\t\t\t\t*\t\t    按名字查询   请按 1\t\t\t*\n");
	 printf("\t\t\t\t*\t\t    按学号查询   请按 2\t\t\t*\n");
	 printf("\t\t\t\t*\t\t    按专业查询   请按 3\t\t\t*\n");
	 printf("\t\t\t\t*\t\t    按学科查询   请按 4\t\t\t*\n");
	 printf("\t\t\t\t*\t\t    按性别查询   请按 5\t\t\t*\n");
	 printf("\t\t\t\t*\t\t    按民族查询   请按 6\t\t\t*\n");
	 printf("\t\t\t\t*\t\t    按地址查询   请按 7\t\t\t*\n");
	 printf("\t\t\t\t*\t\t    返回主菜单   请按 9\t\t\t*\n");
     printf("\t\t\t\t*\t\t    退出程序     请按 0\t\t\t*\n");
	 printf(FRAME_);
	 printf("请输入命令：\n");
}
void name_seek()
{
    printf("\n\n");
    printf(FRAME_);
    printf("\t\t\t\t\t请输入您要查找的学生名字:");
}
void number_seek()
{
    printf("\n\n");
    printf(FRAME_);
    printf("\t\t\t\t\t请输入您要查找的学生学号：");
}
void major_seek()
{
    printf("\n\n");
    printf(FRAME_);
    printf("\t\t\t\t\t请输入您要查找的学生专业：");
}
void subject_seek()
{
    printf("\n\n");
    printf(FRAME_);
    printf("\t\t\t\t\t请输入您要查找的学科：");
}
void sex_seek()
{
    printf("\n\n");
    printf(FRAME_);
    printf("\t\t\t\t\t请输入您要查找的学生性别：");
}
void nation_seek()
{
    printf("\n\n");
    printf(FRAME_);
    printf("\t\t\t\t\t请输入您要查找的学生民族：");
}
void address_seek()
{
    printf("\n\n");
    printf(FRAME_);
    printf("\t\t\t\t\t请输入您要查找的学生地址：");
}


