nt z=0,o=0,t=0;
    temp=head;
    while(temp!=NULL){
        if(temp->value==0) z++;
        else if(temp->value == 1) o++;
        else t++;
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        if(z!=0){
            temp->value=0;
            z--;
        }
        else if(o!=1){
            temp->value=1;
            o--;
        }
        else{
            temp->value=2;
            t--;
        }
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL){
        cout<<temp->value<<endl;
        temp=temp->next;
    }