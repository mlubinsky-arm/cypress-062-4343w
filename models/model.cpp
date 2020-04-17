#include "model.h"
#include "models/data.hpp" // uTensor

// run inference
float get_model_result(float* temp_value) {
//    return 0.0f;
    printf("\n inside get_model_result() \n");
    for (int i=0; i<10; i++){
        printf("%d   %f\n",i, temp_value[i]);
    }
    printf("\n step 1");
    Context ctx;
    printf("\n step 2");
    //Tensor* temp_value_tensor = new WrappedRamTensor<float>({1,10}, (float*) &temp_value);
    Tensor* temp_value_tensor = new WrappedRamTensor<float>({1,10}, (float*) temp_value);
    printf("\n step 3");
    get_data_ctx(ctx, temp_value_tensor);
    printf("\n step 4");
    printf("\n step 5  ...Running Eval...");
    ctx.eval();
    printf("\n step 6 eval finished....");
    S_TENSOR prediction = ctx.get({"dense_3_1/BiasAdd:0"});
    printf("\n step 7");
    float result = *(prediction->read<float>(0,0));
    printf("\n step 8");
    return result;

}
