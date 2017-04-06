#include <stdio.h>
#include "gtest/gtest.h"

#include "Core/Context.h"
#include "Core/Object.h"
#include "Container/Vector.h"
#include "Container/Str.h"
#include "Core/Variant.h"
#include "IO/File.h"
#include "IO/FileSystem.h"

using namespace Urho3D;


//commmon elements
Context* ctx = new Context();
FileSystem* fs = new FileSystem(ctx);

//testing files
String baseTestFile = "../../Test/Test_Dxf.dxf";


TEST(Basic, CheckTestFiles)
{
	bool res = fs->FileExists(baseTestFile);
	EXPECT_EQ(res, true);

}

TEST(Basic, ReadLines)
{

}