LIBRARY ieee;
USE ieee.std_logic_1164.all;
USE ieee.std_logic_arith.all;
USE ieee.std_logic_unsigned.all;


entity portaLogica is
    port(A,B: IN std_logic;
        X: OUT std_logic);
end portaLogica;        

ARCHITECTURE estrutura OF portaLogica is

    BEGIN
    X <= NOT(A AND B);

 END estrutura;



