#ifdef GL_ES
// Set default precision to medium
precision mediump int;
precision mediump float;
#endif

varying vec3 v_normal;

//! [0]
void main()
{   
    vec3 light = vec3(0.5, 2.0, 0.005);
    vec3 normal = light * v_normal;
    float coeff = dot(normal, normal);
    gl_FragColor = vec4(0.1, 0.55, 1.0, 1.0) * 2.0 * (coeff + 0.1);
}
//! [0]