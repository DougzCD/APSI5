class Game {

    constructor(qlinhas, qcolunas) {
        this.qlinhas = qlinhas;
        this.qcolunas = qcolunas;
    }

    geraGrid() {

        var stringMalha = "";

        for (var i = 0; i < this.qlinhas; i++) {
            stringMalha += '\n<div class="linha" id="l' + i + '">\n';

            for (var j = 0; j < this.qcolunas; j++) {
                stringMalha +=
                    '\t<div class="coluna" id="c' + j + '">\n' +
                    '\t\t<input type="checkbox" id="i' + i + j + '">\n' +
                    '\t\t<label for="i' + i + j + '" id="lb' + i + j + '"></label>\n' +
                    '\t</div>\n'
            }

            stringMalha += '</div>';
        }

        $('#corpo-jogo').html(stringMalha);

    }

    resetarMalha() {
        for (var i = 0; i < this.qlinhas; i++) {
            for (var j = 0; j < this.qcolunas; j++) {
                $("#i" + i + j).prop("checked", false)
                $('#lb' + i + j).css('background-color', 'transparent');
            }
        }
    }

}

//má conduta de programação: variáveis globais
var g;
var nlinhas = 3;
var ncolunas = 3;
var criado = false;
var colorJogador = true

function definirMatrix() {
    //inicia game
    document.querySelector('.iniciar').style.display = 'none';
    g = new Game(nlinhas, ncolunas);
    g.geraGrid();
    criado = true;
}


function resetaGrid() {
    //reseta game
    g.resetarMalha();
}

$('main').on('click', () => {
    //selecionar campos
    if (criado) {
        for (let i = 0; i < g.qlinhas; i++) {
            for (let j = 0; j < g.qcolunas; j++) {



                $('#i' + i + j).on('click', () => {

                    var ch = $('#i' + i + j)

                    //muda cores
                    if (colorJogador) {
                        $('#lb' + i + j).css('background-color', 'aquamarine');
                        $('#vezJogador').html('VERMELHO');
                        $('#vezJogador').css('color', 'red');
                        colorJogador = false
                    } else if (!colorJogador) {
                        $('#lb' + i + j).css('background-color', 'red');
                        $('#vezJogador').html('AZUL');
                        $('#vezJogador').css('color', 'aquamarine');
                        colorJogador = true
                    }
                    
                    //impede de selecionar e des-selecionar o mesmo campo
                    if (ch.is(':checked')) {
                        ch.prop('checked', true)
                    }
                    else {
                        ch.prop('checked', true)
                    }

                });
            }
        }
    }
})


