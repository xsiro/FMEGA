#include "Globals.h"
#include "Application.h"
#include "ModuleSceneIntro.h"
#include "Primitive.h"
#include "PhysBody3D.h"

ModuleSceneIntro::ModuleSceneIntro(Application* app, bool start_enabled) : Module(app, start_enabled)
{
}

ModuleSceneIntro::~ModuleSceneIntro()
{}

// Load assets
bool ModuleSceneIntro::Start()
{
	LOG("Loading Intro assets");

	App->audio->PlayFx(App->audio->LoadFx("audio/music/theme.ogg"));

	bool ret = true;
	App->camera->Move(vec3(1.0f, 1.0f, 0.0f));
	App->camera->LookAt(vec3(0, 0, 0));

	//walls colliders

	Cube wall1(2, 3, 250);
	wall1.SetPos(10, 1, 15);
	App->physics->AddBody(wall1, 100000);


	Cube wall2(2, 3, 230);
	wall2.SetPos(-10, 1, 15);
	App->physics->AddBody(wall2, 100000);


	Cube wall3(40, 3, 2);
	wall3.SetPos(-10, 1, 142);
	App->physics->AddBody(wall3, 100000);

	Cube wall4(2, 3, 40);
	wall4.SetPos(-30, 1, 120);
	App->physics->AddBody(wall4, 100000);

	Cube wall5(30, 3, 2);
	wall5.SetPos(-25, 1, 80);
	App->physics->AddBody(wall5, 100000);

	Cube wall6(30, 3, 2);
	wall6.SetPos(-45, 1, 100);
	App->physics->AddBody(wall6, 100000);

	Cube wall7(2, 3, 100);
	wall7.SetPos(-60,1,50);
	App->physics->AddBody(wall7, 100000);

	Cube wall8(2, 3, 80);
	wall8.SetPos(-40, 1, 40);
	App->physics->AddBody(wall8, 100000);

	Cube wall9(30, 3, 2);
	wall9.SetPos(-75, 1, 0);
	App->physics->AddBody(wall9, 100000);

	Cube wall10(20,3,2);
	wall10.SetPos(-30,1,0);
	App->physics->AddBody(wall10, 100000);

	Cube wall11(50, 3,2);
	wall11.SetPos(-55, 1, -10);
	App->physics->AddBody(wall11, 100000);

	Cube wall12(2,3,170);
	wall12.SetPos(-90, 1, -85);
	App->physics->AddBody(wall12, 100000);

	Cube wall13(2, 3, 140);
	wall13.SetPos(-80, 1, -80);
	App->physics->AddBody(wall13, 100000);

	Cube wall14(140, 3, 2);
	wall14.SetPos(-20,1,-170);
	App->physics->AddBody(wall14, 100000);

	Cube wall15(130, 3,2);
	wall15.SetPos(-15,1,-130);
	App->physics->AddBody(wall15, 100000);

	Cube wall16(2,3,75);
	wall16.SetPos(-20, 1, -40);
	App->physics->AddBody(wall16, 100000);

	Cube wall17(2,3,75);
	wall17.SetPos(-30,1,-50);
	App->physics->AddBody(wall17, 100000);

	//rampas

	Cube rampa(5, 1, 30);
	rampa.SetPos(-25,2,-80);
	rampa.SetRotation(20, vec3(1,0,0));
	App->physics->AddBody(rampa, 0);

	//finish line

	Cube finish(2, 0.5, 60);
	finish.SetPos(35, 0, -160);
	App->physics->AddBody(finish, 100000);

	return ret;
}

// Load assets
bool ModuleSceneIntro::CleanUp()
{
	LOG("Unloading Intro scene");

	return true;
}

// Update


update_status ModuleSceneIntro::Update(float dt)
{
	Plane p(0, 1, 0, 0);
	p.axis = true;
	p.Render();

	//render all walls

	Cube wall1(2, 3, 250); //size
	wall1.SetPos(10, 1, 15); //position
	wall1.color = Blue; //color
	wall1.Render(); //draw

	Cube wall2(2, 3, 230);
	wall2.SetPos(-10, 1, 15);
	wall2.color = Blue;
	wall2.Render();

	Cube wall3(40, 3, 2);
	wall3.SetPos(-10, 1, 142);
	wall3.color = Blue;
	wall3.Render();

	Cube wall4(2, 3, 40);
	wall4.SetPos(-30, 1, 120);
	wall4.color = Blue;
	wall4.Render();

	Cube wall5(30, 3, 2);
	wall5.SetPos(-25, 1, 80);
	wall5.color = Blue;
	wall5.Render();

	Cube wall6(30, 3, 2);
	wall6.SetPos(-45, 1, 100);
	wall6.color = Blue;
	wall6.Render();

	Cube wall7(2, 3, 100);
	wall7.SetPos(-60, 1, 50);
	wall7.color = Blue;
	wall7.Render();

	Cube wall8(2, 3, 80);
	wall8.SetPos(-40, 1, 40);
	wall8.color = Blue;
	wall8.Render();

	Cube wall9(30, 3, 2);
	wall9.SetPos(-75, 1, 0);
	wall9.color = Blue;
	wall9.Render();

	Cube wall10(20, 3, 2);
	wall10.SetPos(-30, 1, 0);
	wall10.color = Blue;
	wall10.Render();

	Cube wall11(50, 3, 2);
	wall11.SetPos(-55, 1, -10);
	wall11.color = Blue;
	wall11.Render();

	Cube wall12(2, 3, 170);
	wall12.SetPos(-90, 1, -85);
	wall12.color = Blue;
	wall12.Render();

	Cube wall13(2, 3, 140);
	wall13.SetPos(-80, 1, -80);
	wall13.color = Blue;
	wall13.Render();

	Cube wall14(140, 3, 2);
	wall14.SetPos(-20, 1, -170);
	wall14.color = Blue;
	wall14.Render();

	Cube wall15(130, 3, 2);
	wall15.SetPos(-15, 1, -130);
	wall15.color = Blue;
	wall15.Render();

	Cube wall16(2, 3, 70);
	wall16.SetPos(-20, 1, -40);
	wall16.color = Blue;
	wall16.Render();

	Cube wall17(2, 3, 75);
	wall17.SetPos(-30, 1, -50);
	wall17.color = Blue;
	wall17.Render();

	//start line

	Cube Start(20,0.5,2);
	Start.SetPos(0,0,15);
	Start.color = White;
	Start.Render();
	
	//finish line

	Cube finish(2,0.5,40);
	finish.SetPos(35, 0, -150);
	finish.color = White;
	finish.Render();
	
	Cube rampa(5, 1, 30);
	rampa.SetPos(-25, 2, -80);
	rampa.SetRotation(20, vec3(1, 0, 0));
	rampa.color = Red;
	rampa.Render();


	return UPDATE_CONTINUE;
}



void ModuleSceneIntro::OnCollision(PhysBody3D* body1, PhysBody3D* body2)
{
	
}

