function validarFormulario(event) {
    event.preventDefault();
    var senha = document.getElementById('senha').value;
    var confirmarSenha = document.getElementById('confirmar_senha').value;
    var mensagemConfirmacao = document.getElementById('mensagem_confirmacao');

    if (senha.length < 8) {
        mensagemConfirmacao.innerHTML = 'Erro: A senha deve ter pelo menos 8 caracteres.';
        return false;
    }

    if (senha !== confirmarSenha) {
        mensagemConfirmacao.innerHTML = 'Erro: A senha e a confirmação de senha não são iguais.';
        return false;
    }

    mensagemConfirmacao.innerHTML = 'Confirmado: Formulário válido!';
    return true;
}
