//A bilioteca "struct.h" usa struct como par�metros, ser� necess�rio adiconar a struct usada e mudar o tipo da struct nas fun��es


/*Sintaxes
	StcDeletar: StcDeletar(Struct usada,tamanho, posi��o da struct para deletar)
		Deleta uma struct de uma posi��o, retornando o novo tamanho da struct.
*/

int StcDeletar(/*Tipo da struct*/ *Struct, int tamanho, int deletar){
	for(int i=deletar;i<=tamanho;i++){
		Struct[i]=Struct[i+1];
	}
	tamanho--;
	return tamanho;
}
