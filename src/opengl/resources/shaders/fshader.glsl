#ifdef GL_ES
// Set default precision to medium
precision mediump int;
precision mediump float;
#endif

varying vec3 v_normal;

//! [0]
void main()
{   
    vec3 light = vec3(0.5, 0.5, 0.5);
    gl_FragColor = vec4(0.66, 0.55, 0.33, 1.0) * 0.5 * (1.0 + dot(v_normal, light));
}
//! [0]