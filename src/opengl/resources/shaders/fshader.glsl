#ifdef GL_ES
// Set default precision to medium
precision mediump int;
precision mediump float;
#endif

//! [0]
void main()
{
    gl_FragColor = vec4(0.66, 0.55, 0.33, 1.0);
}
//! [0]