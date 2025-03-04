void test_aes_encrypt_up(void);
void test_aes_encrypt_down(void);


void test_aes_encrypt_up(void){

	aunit_printf("\n##FUNCTION_START_aes_encrypt\n");
 }

void test_aes_encrypt_down(void){
	aunit_printf("\n##FUNCTION_END_aes_encrypt\n");
 }



void abnormal_aes_encrypt_case(int index);

void abnormal_aes_encrypt_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_aes_encrypt_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *in;
	BYTE *out;
	WORD *key;
	int keysize;


	//值序列相关
	int valueList_0[]={128};
	unsigned int listLength_0=1;
	WORD *valueList_1[]={(WORD *)key_PTRTO};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0xf6};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0x8d};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={0};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={0x07};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={0};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={0x43};
	unsigned int listLength_7=1;
	unsigned char valueList_8[]={0};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={0x31};
	unsigned int listLength_9=1;
	unsigned char valueList_10[]={0x34};
	unsigned int listLength_10=1;
	unsigned char valueList_11[]={0};
	unsigned int listLength_11=1;
	unsigned char valueList_12[]={0};
	unsigned int listLength_12=1;
	unsigned char valueList_13[]={0};
	unsigned int listLength_13=1;
	unsigned char valueList_14[]={0};
	unsigned int listLength_14=1;
	unsigned int valueList_15[]={0x2b7e1516};
	unsigned int listLength_15=1;
	unsigned int valueList_16[]={0xabf71588};
	unsigned int listLength_16=1;
	unsigned char valueList_17[]={0};
	unsigned int listLength_17=1;
	unsigned char valueList_18[]={0x88};
	unsigned int listLength_18=1;
	unsigned char valueList_19[]={0xe0};
	unsigned int listLength_19=1;
	unsigned char valueList_20[]={0x30};
	unsigned int listLength_20=1;
	unsigned char valueList_21[]={0xa2};
	unsigned int listLength_21=1;
	unsigned char valueList_22[]={0};
	unsigned int listLength_22=1;
	unsigned char valueList_23[]={0xa8};
	unsigned int listLength_23=1;
	unsigned char valueList_24[]={0};
	unsigned int listLength_24=1;
	unsigned char valueList_25[]={0x5a};
	unsigned int listLength_25=1;
	unsigned char valueList_26[]={0};
	unsigned int listLength_26=1;
	unsigned char valueList_27[]={0x37};
	unsigned int listLength_27=1;
	unsigned char valueList_28[]={0};
	unsigned int listLength_28=1;
	unsigned char valueList_29[]={0};
	unsigned int listLength_29=1;
	unsigned char valueList_30[]={0};
	unsigned int listLength_30=1;
	unsigned char valueList_31[]={0};
	unsigned int listLength_31=1;
	unsigned int valueList_32[]={0x28aed2a6};
	unsigned int listLength_32=1;
	unsigned char valueList_33[]={0x98};
	unsigned int listLength_33=1;
	unsigned int valueList_34[]={0x09cf4f3c};
	unsigned int listLength_34=1;
	unsigned char valueList_35[]={0};
	unsigned int listLength_35=1;
	unsigned char valueList_36[]={0x32};
	unsigned int listLength_36=1;
	unsigned char valueList_37[]={0x31};
	unsigned int listLength_37=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	unsigned char useLast_9=0;
	unsigned char useLast_10=0;
	unsigned char useLast_11=0;
	unsigned char useLast_12=0;
	unsigned char useLast_13=0;
	unsigned char useLast_14=0;
	unsigned char useLast_15=0;
	unsigned char useLast_16=0;
	unsigned char useLast_17=0;
	unsigned char useLast_18=0;
	unsigned char useLast_19=0;
	unsigned char useLast_20=0;
	unsigned char useLast_21=0;
	unsigned char useLast_22=0;
	unsigned char useLast_23=0;
	unsigned char useLast_24=0;
	unsigned char useLast_25=0;
	unsigned char useLast_26=0;
	unsigned char useLast_27=0;
	unsigned char useLast_28=0;
	unsigned char useLast_29=0;
	unsigned char useLast_30=0;
	unsigned char useLast_31=0;
	unsigned char useLast_32=0;
	unsigned char useLast_33=0;
	unsigned char useLast_34=0;
	unsigned char useLast_35=0;
	unsigned char useLast_36=0;
	unsigned char useLast_37=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	AddRoundKey_call_counter = 0;
	MixColumns_call_counter = 0;
	SubBytes_call_counter = 0;
	ShiftRows_call_counter = 0;

	aunit_printf("###TEST_TREE_test_aes_encrypt_1,false,0\n");
	aunit_printf("#CASE_START_test_aes_encrypt_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			keysize=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			key=(WORD *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			in[8]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			in[13]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			out[9]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			in[11]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			out[7]=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			in[4]=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			out[5]=(unsigned char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			in[6]=(unsigned char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			in[15]=(unsigned char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			out[3]=(unsigned char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			out[1]=(unsigned char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			out[13]=(unsigned char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			out[15]=(unsigned char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			key_PTRTO[0]=(unsigned int)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			key_PTRTO[2]=(unsigned int)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			out[11]=(unsigned char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			in[1]=(unsigned char)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			in[3]=(unsigned char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			in[9]=(unsigned char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			in[14]=(unsigned char)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			out[8]=(unsigned char)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			in[12]=(unsigned char)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			out[6]=(unsigned char)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			in[5]=(unsigned char)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			out[4]=(unsigned char)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			in[7]=(unsigned char)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			out[2]=(unsigned char)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			out[12]=(unsigned char)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			out[0]=(unsigned char)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			out[14]=(unsigned char)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			key_PTRTO[1]=(unsigned int)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			in[10]=(unsigned char)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			key_PTRTO[3]=(unsigned int)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			out[10]=(unsigned char)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			in[0]=(unsigned char)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			in[2]=(unsigned char)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		aes_encrypt(in,out,key,keysize);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("AddRoundKey","AddRoundKey_call_counter",AddRoundKey_call_counter)
	OB_INT_EXPR("MixColumns","MixColumns_call_counter",MixColumns_call_counter)
	OB_INT_EXPR("SubBytes","SubBytes_call_counter",SubBytes_call_counter)
	OB_INT_EXPR("ShiftRows","ShiftRows_call_counter",ShiftRows_call_counter)

	aunit_printf("#CASE_END_test_aes_encrypt_1\n");
}

void test_aes_encrypt_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *in;
	BYTE *out;
	WORD *key;
	int keysize;


	//值序列相关
	int valueList_0[]={192};
	unsigned int listLength_0=1;
	WORD *valueList_1[]={(WORD *)key_PTRTO};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0xf6};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0x8d};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={0};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={0x07};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={0};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={0x43};
	unsigned int listLength_7=1;
	unsigned char valueList_8[]={0};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={0x31};
	unsigned int listLength_9=1;
	unsigned char valueList_10[]={0x34};
	unsigned int listLength_10=1;
	unsigned char valueList_11[]={0};
	unsigned int listLength_11=1;
	unsigned char valueList_12[]={0};
	unsigned int listLength_12=1;
	unsigned char valueList_13[]={0};
	unsigned int listLength_13=1;
	unsigned int valueList_14[]={0x2b7e1516};
	unsigned int listLength_14=1;
	unsigned char valueList_15[]={0};
	unsigned int listLength_15=1;
	unsigned int valueList_16[]={0xabf71588};
	unsigned int listLength_16=1;
	unsigned int valueList_17[]={0x2b7e1516};
	unsigned int listLength_17=1;
	unsigned int valueList_18[]={0xabf71588};
	unsigned int listLength_18=1;
	unsigned char valueList_19[]={0};
	unsigned int listLength_19=1;
	unsigned char valueList_20[]={0x88};
	unsigned int listLength_20=1;
	unsigned char valueList_21[]={0xe0};
	unsigned int listLength_21=1;
	unsigned char valueList_22[]={0x30};
	unsigned int listLength_22=1;
	unsigned char valueList_23[]={0xa2};
	unsigned int listLength_23=1;
	unsigned char valueList_24[]={0};
	unsigned int listLength_24=1;
	unsigned char valueList_25[]={0xa8};
	unsigned int listLength_25=1;
	unsigned char valueList_26[]={0};
	unsigned int listLength_26=1;
	unsigned char valueList_27[]={0x5a};
	unsigned int listLength_27=1;
	unsigned char valueList_28[]={0};
	unsigned int listLength_28=1;
	unsigned char valueList_29[]={0x37};
	unsigned int listLength_29=1;
	unsigned char valueList_30[]={0};
	unsigned int listLength_30=1;
	unsigned char valueList_31[]={0};
	unsigned int listLength_31=1;
	unsigned int valueList_32[]={0x28aed2a6};
	unsigned int listLength_32=1;
	unsigned char valueList_33[]={0};
	unsigned int listLength_33=1;
	unsigned char valueList_34[]={0};
	unsigned int listLength_34=1;
	unsigned int valueList_35[]={0x09cf4f3c};
	unsigned int listLength_35=1;
	unsigned int valueList_36[]={0x28aed2a6};
	unsigned int listLength_36=1;
	unsigned char valueList_37[]={0x98};
	unsigned int listLength_37=1;
	unsigned int valueList_38[]={0x09cf4f3c};
	unsigned int listLength_38=1;
	unsigned char valueList_39[]={0};
	unsigned int listLength_39=1;
	unsigned char valueList_40[]={0x32};
	unsigned int listLength_40=1;
	unsigned char valueList_41[]={0x31};
	unsigned int listLength_41=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	unsigned char useLast_9=0;
	unsigned char useLast_10=0;
	unsigned char useLast_11=0;
	unsigned char useLast_12=0;
	unsigned char useLast_13=0;
	unsigned char useLast_14=0;
	unsigned char useLast_15=0;
	unsigned char useLast_16=0;
	unsigned char useLast_17=0;
	unsigned char useLast_18=0;
	unsigned char useLast_19=0;
	unsigned char useLast_20=0;
	unsigned char useLast_21=0;
	unsigned char useLast_22=0;
	unsigned char useLast_23=0;
	unsigned char useLast_24=0;
	unsigned char useLast_25=0;
	unsigned char useLast_26=0;
	unsigned char useLast_27=0;
	unsigned char useLast_28=0;
	unsigned char useLast_29=0;
	unsigned char useLast_30=0;
	unsigned char useLast_31=0;
	unsigned char useLast_32=0;
	unsigned char useLast_33=0;
	unsigned char useLast_34=0;
	unsigned char useLast_35=0;
	unsigned char useLast_36=0;
	unsigned char useLast_37=0;
	unsigned char useLast_38=0;
	unsigned char useLast_39=0;
	unsigned char useLast_40=0;
	unsigned char useLast_41=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	AddRoundKey_call_counter = 0;
	MixColumns_call_counter = 0;
	SubBytes_call_counter = 0;
	ShiftRows_call_counter = 0;

	aunit_printf("###TEST_TREE_test_aes_encrypt_2,false,0\n");
	aunit_printf("#CASE_START_test_aes_encrypt_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			keysize=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			key=(WORD *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			in[8]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			in[13]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			out[9]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			in[11]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			out[7]=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			in[4]=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			out[5]=(unsigned char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			in[6]=(unsigned char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			in[15]=(unsigned char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			out[3]=(unsigned char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			out[1]=(unsigned char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			out[13]=(unsigned char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			key_PTRTO[4]=(unsigned int)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			out[15]=(unsigned char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			key_PTRTO[6]=(unsigned int)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			key_PTRTO[0]=(unsigned int)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			key_PTRTO[2]=(unsigned int)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			out[11]=(unsigned char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			in[1]=(unsigned char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			in[3]=(unsigned char)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			in[9]=(unsigned char)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			in[14]=(unsigned char)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			out[8]=(unsigned char)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			in[12]=(unsigned char)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			out[6]=(unsigned char)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			in[5]=(unsigned char)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			out[4]=(unsigned char)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			in[7]=(unsigned char)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			out[2]=(unsigned char)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			out[12]=(unsigned char)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			key_PTRTO[5]=(unsigned int)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			out[0]=(unsigned char)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			out[14]=(unsigned char)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			key_PTRTO[7]=(unsigned int)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			key_PTRTO[1]=(unsigned int)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			in[10]=(unsigned char)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		if(aUnItCoUnTeR<listLength_38 || useLast_38){
			key_PTRTO[3]=(unsigned int)valueList_38[aUnItCoUnTeR<listLength_38?aUnItCoUnTeR:listLength_38-1];

		}
		if(aUnItCoUnTeR<listLength_39 || useLast_39){
			out[10]=(unsigned char)valueList_39[aUnItCoUnTeR<listLength_39?aUnItCoUnTeR:listLength_39-1];

		}
		if(aUnItCoUnTeR<listLength_40 || useLast_40){
			in[0]=(unsigned char)valueList_40[aUnItCoUnTeR<listLength_40?aUnItCoUnTeR:listLength_40-1];

		}
		if(aUnItCoUnTeR<listLength_41 || useLast_41){
			in[2]=(unsigned char)valueList_41[aUnItCoUnTeR<listLength_41?aUnItCoUnTeR:listLength_41-1];

		}
		aes_encrypt(in,out,key,keysize);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("AddRoundKey","AddRoundKey_call_counter",AddRoundKey_call_counter)
	OB_INT_EXPR("MixColumns","MixColumns_call_counter",MixColumns_call_counter)
	OB_INT_EXPR("SubBytes","SubBytes_call_counter",SubBytes_call_counter)
	OB_INT_EXPR("ShiftRows","ShiftRows_call_counter",ShiftRows_call_counter)

	aunit_printf("#CASE_END_test_aes_encrypt_2\n");
}

void test_aes_encrypt_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *in;
	BYTE *out;
	WORD *key;
	int keysize;


	//值序列相关
	int valueList_0[]={256};
	unsigned int listLength_0=1;
	WORD *valueList_1[]={(WORD *)key_PTRTO};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0xf6};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0x8d};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={0};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={0x07};
	unsigned int listLength_5=1;
	unsigned char valueList_6[]={0};
	unsigned int listLength_6=1;
	unsigned char valueList_7[]={0x43};
	unsigned int listLength_7=1;
	unsigned char valueList_8[]={0};
	unsigned int listLength_8=1;
	unsigned char valueList_9[]={0x31};
	unsigned int listLength_9=1;
	unsigned char valueList_10[]={0x34};
	unsigned int listLength_10=1;
	unsigned char valueList_11[]={0};
	unsigned int listLength_11=1;
	unsigned char valueList_12[]={0};
	unsigned int listLength_12=1;
	unsigned char valueList_13[]={0};
	unsigned int listLength_13=1;
	unsigned int valueList_14[]={0x2b7e1516};
	unsigned int listLength_14=1;
	unsigned char valueList_15[]={0};
	unsigned int listLength_15=1;
	unsigned int valueList_16[]={0xabf71588};
	unsigned int listLength_16=1;
	unsigned int valueList_17[]={0x2b7e1516};
	unsigned int listLength_17=1;
	unsigned int valueList_18[]={0xabf71588};
	unsigned int listLength_18=1;
	unsigned char valueList_19[]={0};
	unsigned int listLength_19=1;
	unsigned char valueList_20[]={0x88};
	unsigned int listLength_20=1;
	unsigned char valueList_21[]={0xe0};
	unsigned int listLength_21=1;
	unsigned char valueList_22[]={0x30};
	unsigned int listLength_22=1;
	unsigned char valueList_23[]={0xa2};
	unsigned int listLength_23=1;
	unsigned char valueList_24[]={0};
	unsigned int listLength_24=1;
	unsigned char valueList_25[]={0xa8};
	unsigned int listLength_25=1;
	unsigned char valueList_26[]={0};
	unsigned int listLength_26=1;
	unsigned char valueList_27[]={0x5a};
	unsigned int listLength_27=1;
	unsigned char valueList_28[]={0};
	unsigned int listLength_28=1;
	unsigned char valueList_29[]={0x37};
	unsigned int listLength_29=1;
	unsigned char valueList_30[]={0};
	unsigned int listLength_30=1;
	unsigned char valueList_31[]={0};
	unsigned int listLength_31=1;
	unsigned int valueList_32[]={0x28aed2a6};
	unsigned int listLength_32=1;
	unsigned char valueList_33[]={0};
	unsigned int listLength_33=1;
	unsigned char valueList_34[]={0};
	unsigned int listLength_34=1;
	unsigned int valueList_35[]={0x09cf4f3c};
	unsigned int listLength_35=1;
	unsigned int valueList_36[]={0x28aed2a6};
	unsigned int listLength_36=1;
	unsigned char valueList_37[]={0x98};
	unsigned int listLength_37=1;
	unsigned int valueList_38[]={0x09cf4f3c};
	unsigned int listLength_38=1;
	unsigned char valueList_39[]={0};
	unsigned int listLength_39=1;
	unsigned char valueList_40[]={0x32};
	unsigned int listLength_40=1;
	unsigned char valueList_41[]={0x31};
	unsigned int listLength_41=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	unsigned char useLast_9=0;
	unsigned char useLast_10=0;
	unsigned char useLast_11=0;
	unsigned char useLast_12=0;
	unsigned char useLast_13=0;
	unsigned char useLast_14=0;
	unsigned char useLast_15=0;
	unsigned char useLast_16=0;
	unsigned char useLast_17=0;
	unsigned char useLast_18=0;
	unsigned char useLast_19=0;
	unsigned char useLast_20=0;
	unsigned char useLast_21=0;
	unsigned char useLast_22=0;
	unsigned char useLast_23=0;
	unsigned char useLast_24=0;
	unsigned char useLast_25=0;
	unsigned char useLast_26=0;
	unsigned char useLast_27=0;
	unsigned char useLast_28=0;
	unsigned char useLast_29=0;
	unsigned char useLast_30=0;
	unsigned char useLast_31=0;
	unsigned char useLast_32=0;
	unsigned char useLast_33=0;
	unsigned char useLast_34=0;
	unsigned char useLast_35=0;
	unsigned char useLast_36=0;
	unsigned char useLast_37=0;
	unsigned char useLast_38=0;
	unsigned char useLast_39=0;
	unsigned char useLast_40=0;
	unsigned char useLast_41=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	AddRoundKey_call_counter = 0;
	MixColumns_call_counter = 0;
	SubBytes_call_counter = 0;
	ShiftRows_call_counter = 0;

	aunit_printf("###TEST_TREE_test_aes_encrypt_3,false,0\n");
	aunit_printf("#CASE_START_test_aes_encrypt_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			keysize=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			key=(WORD *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			in[8]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			in[13]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			out[9]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			in[11]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			out[7]=(unsigned char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			in[4]=(unsigned char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			out[5]=(unsigned char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			in[6]=(unsigned char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			in[15]=(unsigned char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			out[3]=(unsigned char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			out[1]=(unsigned char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			out[13]=(unsigned char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			key_PTRTO[4]=(unsigned int)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			out[15]=(unsigned char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			key_PTRTO[6]=(unsigned int)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			key_PTRTO[0]=(unsigned int)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			key_PTRTO[2]=(unsigned int)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			out[11]=(unsigned char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			in[1]=(unsigned char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			in[3]=(unsigned char)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			in[9]=(unsigned char)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			in[14]=(unsigned char)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			out[8]=(unsigned char)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			in[12]=(unsigned char)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			out[6]=(unsigned char)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			in[5]=(unsigned char)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			out[4]=(unsigned char)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			in[7]=(unsigned char)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			out[2]=(unsigned char)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			out[12]=(unsigned char)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			key_PTRTO[5]=(unsigned int)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			out[0]=(unsigned char)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		if(aUnItCoUnTeR<listLength_34 || useLast_34){
			out[14]=(unsigned char)valueList_34[aUnItCoUnTeR<listLength_34?aUnItCoUnTeR:listLength_34-1];

		}
		if(aUnItCoUnTeR<listLength_35 || useLast_35){
			key_PTRTO[7]=(unsigned int)valueList_35[aUnItCoUnTeR<listLength_35?aUnItCoUnTeR:listLength_35-1];

		}
		if(aUnItCoUnTeR<listLength_36 || useLast_36){
			key_PTRTO[1]=(unsigned int)valueList_36[aUnItCoUnTeR<listLength_36?aUnItCoUnTeR:listLength_36-1];

		}
		if(aUnItCoUnTeR<listLength_37 || useLast_37){
			in[10]=(unsigned char)valueList_37[aUnItCoUnTeR<listLength_37?aUnItCoUnTeR:listLength_37-1];

		}
		if(aUnItCoUnTeR<listLength_38 || useLast_38){
			key_PTRTO[3]=(unsigned int)valueList_38[aUnItCoUnTeR<listLength_38?aUnItCoUnTeR:listLength_38-1];

		}
		if(aUnItCoUnTeR<listLength_39 || useLast_39){
			out[10]=(unsigned char)valueList_39[aUnItCoUnTeR<listLength_39?aUnItCoUnTeR:listLength_39-1];

		}
		if(aUnItCoUnTeR<listLength_40 || useLast_40){
			in[0]=(unsigned char)valueList_40[aUnItCoUnTeR<listLength_40?aUnItCoUnTeR:listLength_40-1];

		}
		if(aUnItCoUnTeR<listLength_41 || useLast_41){
			in[2]=(unsigned char)valueList_41[aUnItCoUnTeR<listLength_41?aUnItCoUnTeR:listLength_41-1];

		}
		aes_encrypt(in,out,key,keysize);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("AddRoundKey","AddRoundKey_call_counter",AddRoundKey_call_counter)
	OB_INT_EXPR("MixColumns","MixColumns_call_counter",MixColumns_call_counter)
	OB_INT_EXPR("SubBytes","SubBytes_call_counter",SubBytes_call_counter)
	OB_INT_EXPR("ShiftRows","ShiftRows_call_counter",ShiftRows_call_counter)

	aunit_printf("#CASE_END_test_aes_encrypt_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_aes_encrypt_up();

	switch(caseIndex){
	case 1:
		test_aes_encrypt_1();
		break;
	case 2:
		test_aes_encrypt_2();
		break;
	case 3:
		test_aes_encrypt_3();
		break;
	default:
		abnormal_aes_encrypt_case(caseIndex);
		break;
	}

	test_aes_encrypt_down();
}

