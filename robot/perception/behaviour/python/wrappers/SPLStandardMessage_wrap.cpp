class_<SPLStandardMessage>("SPLStandardMessage")
    .def_readonly("playerNum", &SPLStandardMessage::playerNum)
    .def_readonly("fallen", &SPLStandardMessage::fallen)
    .def_readonly("pose", &SPLStandardMessage::pose)
    .def_readonly("walkingTo", &SPLStandardMessage::walkingTo)
    .def_readonly("shootingTo", &SPLStandardMessage::shootingTo)
    .def_readonly("ballAge", &SPLStandardMessage::ballAge)
    .def_readonly("ball", &SPLStandardMessage::ball)
    .def_readonly("ballVel", &SPLStandardMessage::ballVel)
    .def_readonly("suggestion", &SPLStandardMessage::suggestion)
    .def_readonly("intention", &SPLStandardMessage::intention)
    .def_readonly("averageWalkSpeed", &SPLStandardMessage::averageWalkSpeed)
    .def_readonly("maxKickDistance", &SPLStandardMessage::maxKickDistance)
    .def_readonly("currentPositionConfidence", &SPLStandardMessage::currentPositionConfidence);
