-------- EventFlow: subchallnpc000_twin --------

Actor: subchallnpc000_twin
entrypoint: None()
actions: ['Demo_Talk']
queries: []
params: {'CreateMode': 0, 'IsGrounding': False, 'IsWorld': False, 'PosX': 0.0, 'PosY': 0.0, 'PosZ': 0.0, 'RotX': 0.0, 'RotY': 0.0, 'RotZ': 0.0}

void Talk() {

    call InitTalk.InitTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

    subchallnpc000_twin.Demo_Talk({'IsWaitFinish': True, 'ASName': '', 'IsCloseMessageDialog': False, 'IsBecomingSpeaker': True, 'IsOverWriteLabelActorName': False, 'MessageId': 'EventFlowMsg/subchallnpc000:Talk04'})
}

void NearActorsTalk() {

    call subchallnpc000.NearActorsTalk({'Arg_Turn': 0, 'Arg_Greeting': 'FollowAISchedule'})

}
