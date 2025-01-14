#include <PAWSlibrary.h>

// TRANSLATION OF http://www.rosettacode.org/wiki/Mandelbrot_set#BASIC256 to C and PAWSlibrary

int main( int argc, char **argv ) {
    const int graphwidth = 320, graphheight = 240, kt = 64;
    float m = 4.0;
    float xmin = -2.1, xmax = 0.6, ymin = -1.35, ymax = 1.35;
    float dx = (xmax - xmin) / graphwidth, dy = (ymax - ymin) / graphheight;
    float jx, jy, tx, ty, wx, wy, r;
    int k;

    screen_mode( 0, MODE_RGBM, 0 );

    for( int step = 16; step > 0; step = step >> 1 ) {
        int offset = step - 1;
        if( !offset ) gpu_pixelblock_start( 0, 0, graphwidth );

        for( int y = 0; y < graphheight; y += step) {
            jy = ymin + y * dy;
            for( int x = 0; x < graphwidth; x += step ) {
                jx = xmin + x * dx;
                k = 0; wx = 0.0; wy = 0.0;
                do {
                    tx = wx * wx - wy * wy + jx;
                    ty = 2.0 * wx * wy + jy;
                    wx = tx;
                    wy = ty;
                    r = wx * wx + wy * wy;
                    k = k + 1;
                } while( ( r < m ) && ( k < kt ) );

                if( offset ) {
                    gpu_rectangle( k, x, y, x + offset, y + offset );
                } else {
                    gpu_pixelblock_pixel( k );
                }
            }
        }
    }

    gpu_pixelblock_stop();
    sleep1khz( 4000, 0 );
}
