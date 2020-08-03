string isPossible( int a, int b, int c, int d ) {
    
    if( (a <= c) && ( b <= d ) ){
        
        int g1 = __gcd( a, b );
        int g2 = __gcd( c, d );
        
        if( g1 == g2 ) return "Yes";
        
    }
    
    return "No";
    
}
