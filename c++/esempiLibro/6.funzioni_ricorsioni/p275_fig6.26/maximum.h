//Fig 2.26 pag 275
//Definizione del tamplate di funzione maximum
//hpc 16.04.2021

// o template < typename T >
template <typename T>
T maximum(T value1, T value2, T value3)
{
    T maximumValue = value1;

    if (value2 > maximumValue)
        maximumValue = value2;

    if (value3 > maximumValue)
        maximumValue = value3;

    return maximumValue;
}
