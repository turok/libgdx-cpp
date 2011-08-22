
/*
    Copyright 2011 Aevum Software aevum @ aevumlab.com

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.

    @author Victor Vicente de Carvalho victor.carvalho@aevumlab.com
    @author Ozires Bortolon de Faria ozires@aevumlab.com
*/

#include "LinearInterpolator.hpp"

using namespace gdx_cpp::scenes::scene2d::interpolators;

LinearInterpolator& LinearInterpolator::newObject () {
    return new LinearInterpolator();
}

LinearInterpolator& LinearInterpolator::$ () {
    return pool.obtain();
}

void LinearInterpolator::finished () {
    pool.free(this);
}

float LinearInterpolator::getInterpolation (float input) {
    return input;
}

gdx_cpp::scenes::scene2d::Interpolator& LinearInterpolator::copy () {
    return $();
}

